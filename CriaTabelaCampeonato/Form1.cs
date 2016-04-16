using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CriaTabelaCampeonato
{
    public partial class frmCriaTabela : Form
    {
        public static class Validacao
        {
            //obs.: 8 é backspace, 13 é enter, 32 é espaço.
            public static char consistNumRealPos(char c, string texto)
            {
                int i;
                i = texto.IndexOf('.');
                if (i >= 0 && c == '.')
                {
                    System.Windows.Forms.MessageBox.Show("Vírgula já existente...");
                    return ((char)0);
                }
                else
                {
                    if (((c < '0') || (c > '9')) && c != '.' && c != (char)8 && c != (char)13)
                    {
                        System.Windows.Forms.MessageBox.Show("Tecla inválida...");
                        c = (char)0;
                    }
                }
                return (c);
            }

            public static char consistNumNat(char c)
            {
                if (((c < '0') || (c > '9')) && c != (char)8 && c != (char)13)
                {
                    System.Windows.Forms.MessageBox.Show("Tecla inválida...");
                    c = (char)0;
                }
                return (c);
            }

            public static char consistText(char c)
            {
                if (((c < 'A') || (c > 'Z')) && ((c < 'a') || (c > 'z')) && ((c < 'Ç') || (c > 'É'))
                    && ((c < 'ô') || (c > 'Ü')) && ((c < 'á') || (c > 'Ñ')) && ((c < 'Á') || (c > 'À'))
                    && ((c < 'Á') || (c > 'À')) && ((c < 'Ê') || (c > 'È')) && ((c < 'Í') || (c > 'Ï'))
                    && ((c < 'Ô') || (c > 'Õ')) && ((c < 'Ú') || (c > 'Ý')) && c != 'Ó' && c != 'Ì' && c != (char)8
                    && c != (char)32 && c != (char)13)
                {
                    System.Windows.Forms.MessageBox.Show("Tecla inválida...");
                    c = (char)0;
                }
                return (c);
            }
        }

        public frmCriaTabela()
        {
            InitializeComponent();
        }

        int cont = 0;
        string[] jog, pers;
        string listJog, listPers;
        int njs, nps, nrs;        

        private void txtNumJog_KeyPress(object sender, KeyPressEventArgs e)
        {
            e.KeyChar = Validacao.consistNumNat(e.KeyChar);
            if (e.KeyChar == (char)13)
            {
                njs = int.Parse(txtNumJog.Text);
                jog = new string[njs];
                txtNumJog.Enabled = false;
                lblNomeJog.Visible = true;
                txtNomeJog.Visible = true;
                txtNomeJog.Focus();
            }
        }

        private void txtNomeJog_KeyPress(object sender, KeyPressEventArgs e)
        {
            e.KeyChar = Validacao.consistText(e.KeyChar);
            if (e.KeyChar == (char)13 && txtNomeJog.Text != "")
            {
                jog[cont] = txtNomeJog.Text;
                listJog = listJog + "\n" + txtNomeJog.Text;
                lblListJog.Text = listJog;
                txtNomeJog.Text = "";
                cont++;
                if (cont > (njs - 1))
                {
                    txtNomeJog.Enabled = false;
                    lblNumPers.Visible = true;
                    txtNumPers.Visible = true;
                    txtNumPers.Focus();
                    cont = 0;
                }
            }
        }

        private void txtNumPers_KeyPress(object sender, KeyPressEventArgs e)
        {
            e.KeyChar = Validacao.consistNumNat(e.KeyChar);
            if (e.KeyChar == (char)13)
            {
                nps = int.Parse(txtNumPers.Text);
                pers = new string[nps];
                txtNumPers.Enabled = false;
                lblNomePers.Visible = true;
                txtNomePers.Visible = true;
                txtNomePers.Focus();
            }
        }

        private void txtNomePers_KeyPress(object sender, KeyPressEventArgs e)
        {
            e.KeyChar = Validacao.consistText(e.KeyChar);
            if (e.KeyChar == (char)13 && txtNomePers.Text != "")
            {
                pers[cont] = txtNomePers.Text;
                listPers = listPers + "\n" + txtNomePers.Text;
                lblListPers.Text = listPers;
                txtNomePers.Text = "";
                cont++;
                if (cont > (nps - 1))
                {
                    txtNomePers.Enabled = false;
                    
                    cont = 0;
                }
            }
        }
    }
}
