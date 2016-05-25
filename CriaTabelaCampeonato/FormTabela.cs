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
    public partial class frmTabela : Form
    {
        public frmTabela(string[] jogad, string[] person)
        {
            InitializeComponent();
            txtTeste.Text = jogad[0];
        }

        int nrs;
    }
}
