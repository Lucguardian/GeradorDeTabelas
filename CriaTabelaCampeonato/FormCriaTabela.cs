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

        int cont1 = 0, cont2 = 0; //contadores globais do form 1
        string[] jog, pers; //declaração dos vetores que receberão os nomes de jogadores e personagens
        string listJog, listPers; //string que 'empilha' os nomes para visualização nos labels
        int njs, nps; //variáveis que recebem o número de jogadores e personagens

        private void txtNumJog_KeyPress(object sender, KeyPressEventArgs e) //Número de jogadores - qdo se pressiona uma tecla no text box
        {
            e.KeyChar = Validacao.consistNumNat(e.KeyChar); //a tecla pressionada é 'substituída' pelo valor que o método de validação retorna
            if (e.KeyChar == (char)13) //quando 'enter' é pressionado
            {
                njs = int.Parse(txtNumJog.Text); //variável recebe o retorno do método de int que analisa o texto contendo o número de jogadores - todo text box é uma string
                jog = new string[njs]; //instancia o vetor de string que recebe o nome do jogador com o id do contador de acordo com o número de jogadores
                txtNumJog.Enabled = false;
                lblNomeJog.Visible = true;
                txtNomeJog.Visible = true;
                txtNomeJog.Focus();
            }
        }

        private void txtNomeJog_KeyPress(object sender, KeyPressEventArgs e) //Nome dos jogadores
        {
            e.KeyChar = Validacao.consistText(e.KeyChar);
            if (e.KeyChar == (char)13 && txtNomeJog.Text != "")
            {
                jog[cont1] = txtNomeJog.Text; //atribui o nome do jogador ao vetor de acordo com o contador
                listJog = listJog + "\n" + txtNomeJog.Text; //a string recebe ela mesma, quebra de página e o conteúdo do txt box para montar a lista de jogadores
                lblListJog.Text = listJog; //exibe no label respectivo
                txtNomeJog.Text = ""; //esvazia text box
                cont1++; //acrescenta 1 ao contador
                if (cont1 > (njs - 1))//verifica se o contador ultrapassou o número de jogadores para partir para o próximo campo
                {
                    txtNomeJog.Enabled = false;
                    lblNumPers.Visible = true;
                    txtNumPers.Visible = true;
                    txtNumPers.Focus();
                    cont1 = 0;
                }
            }
        }

        private void txtNumPers_KeyPress(object sender, KeyPressEventArgs e) //Número de personagens
        {
            e.KeyChar = Validacao.consistNumNat(e.KeyChar);
            if (e.KeyChar == (char)13)
            {
                int verif = int.Parse(txtNumPers.Text);
                if ((verif%2) == 0 && verif > 3) //Verifica se o número de personagens é par e maior do que 3
                {
                    nps = int.Parse(txtNumPers.Text);
                    pers = new string[nps];
                    txtNumPers.Enabled = false;
                    lblNomePers.Visible = true;
                    txtNomePers.Visible = true;
                    lblVarJog.Visible = true;
                    txtNomePers.Focus();
                    lblVarJog.Text = jog[cont1] + ":";//label com o nome do jogador que escolhe personagem
                }
                else
                {
                    MessageBox.Show("O número deve ser par e maior do que 3.");
                }                
            }
        }

        private void txtNomePers_KeyPress(object sender, KeyPressEventArgs e) //Nome dos personagens
        {
            e.KeyChar = Validacao.consistText(e.KeyChar);
            if (e.KeyChar == (char)13 && txtNomePers.Text != "")
            {                
                pers[cont2] = txtNomePers.Text;
                listPers = listPers + "\n" + txtNomePers.Text;
                lblListPers.Text = listPers;
                txtNomePers.Text = "";
                cont2++;
                cont1++;                
                if (cont2 > (nps - 1))
                {
                    txtNomePers.Enabled = false;
                    cont2 = 0;
                    frmTabela tabela = new frmTabela(jog, pers);//Passa os vetores com nomes de jogadores e personagens para o form de tabela
                    tabela.Show();
                }
                if (cont1 > (njs - 1))
                {
                    cont1 = 0;
                }
                lblVarJog.Text = jog[cont1];
            }
        }
    }
}
