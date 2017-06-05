namespace CriaTabelaCampeonato
{
    partial class frmCriaTabela
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmCriaTabela));
            this.lblNumJog = new System.Windows.Forms.Label();
            this.txtNumJog = new System.Windows.Forms.TextBox();
            this.lblNomeJog = new System.Windows.Forms.Label();
            this.txtNomeJog = new System.Windows.Forms.TextBox();
            this.gbJog = new System.Windows.Forms.GroupBox();
            this.lblListJog = new System.Windows.Forms.Label();
            this.lblNumPers = new System.Windows.Forms.Label();
            this.txtNumPers = new System.Windows.Forms.TextBox();
            this.lblNomePers = new System.Windows.Forms.Label();
            this.txtNomePers = new System.Windows.Forms.TextBox();
            this.gbPers = new System.Windows.Forms.GroupBox();
            this.lblListPers = new System.Windows.Forms.Label();
            this.lblVarJog = new System.Windows.Forms.Label();
            this.gbJog.SuspendLayout();
            this.gbPers.SuspendLayout();
            this.SuspendLayout();
            // 
            // lblNumJog
            // 
            this.lblNumJog.AutoSize = true;
            this.lblNumJog.Location = new System.Drawing.Point(32, 24);
            this.lblNumJog.Name = "lblNumJog";
            this.lblNumJog.Size = new System.Drawing.Size(148, 13);
            this.lblNumJog.TabIndex = 0;
            this.lblNumJog.Text = "Digite o número de jogadores:";
            // 
            // txtNumJog
            // 
            this.txtNumJog.Location = new System.Drawing.Point(394, 24);
            this.txtNumJog.Name = "txtNumJog";
            this.txtNumJog.Size = new System.Drawing.Size(37, 20);
            this.txtNumJog.TabIndex = 1;
            this.txtNumJog.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.txtNumJog_KeyPress);
            // 
            // lblNomeJog
            // 
            this.lblNomeJog.AutoSize = true;
            this.lblNomeJog.Location = new System.Drawing.Point(32, 72);
            this.lblNomeJog.Name = "lblNomeJog";
            this.lblNomeJog.Size = new System.Drawing.Size(144, 13);
            this.lblNomeJog.TabIndex = 2;
            this.lblNomeJog.Text = "Digite o nome dos jogadores:";
            this.lblNomeJog.Visible = false;
            // 
            // txtNomeJog
            // 
            this.txtNomeJog.Location = new System.Drawing.Point(203, 72);
            this.txtNomeJog.Name = "txtNomeJog";
            this.txtNomeJog.Size = new System.Drawing.Size(228, 20);
            this.txtNomeJog.TabIndex = 3;
            this.txtNomeJog.Visible = false;
            this.txtNomeJog.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.txtNomeJog_KeyPress);
            // 
            // gbJog
            // 
            this.gbJog.AutoSize = true;
            this.gbJog.BackColor = System.Drawing.Color.Transparent;
            this.gbJog.Controls.Add(this.lblListJog);
            this.gbJog.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.gbJog.Location = new System.Drawing.Point(451, 24);
            this.gbJog.Name = "gbJog";
            this.gbJog.Size = new System.Drawing.Size(143, 379);
            this.gbJog.TabIndex = 4;
            this.gbJog.TabStop = false;
            this.gbJog.Text = "Jogadores";
            // 
            // lblListJog
            // 
            this.lblListJog.Location = new System.Drawing.Point(22, 16);
            this.lblListJog.Name = "lblListJog";
            this.lblListJog.Size = new System.Drawing.Size(100, 346);
            this.lblListJog.TabIndex = 0;
            // 
            // lblNumPers
            // 
            this.lblNumPers.AutoSize = true;
            this.lblNumPers.Location = new System.Drawing.Point(32, 120);
            this.lblNumPers.Name = "lblNumPers";
            this.lblNumPers.Size = new System.Drawing.Size(163, 13);
            this.lblNumPers.TabIndex = 5;
            this.lblNumPers.Text = "Digite o número de personagens:";
            this.lblNumPers.Visible = false;
            // 
            // txtNumPers
            // 
            this.txtNumPers.Location = new System.Drawing.Point(394, 120);
            this.txtNumPers.Name = "txtNumPers";
            this.txtNumPers.Size = new System.Drawing.Size(37, 20);
            this.txtNumPers.TabIndex = 6;
            this.txtNumPers.Visible = false;
            this.txtNumPers.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.txtNumPers_KeyPress);
            // 
            // lblNomePers
            // 
            this.lblNomePers.AutoSize = true;
            this.lblNomePers.Location = new System.Drawing.Point(32, 168);
            this.lblNomePers.Name = "lblNomePers";
            this.lblNomePers.Size = new System.Drawing.Size(163, 13);
            this.lblNomePers.TabIndex = 7;
            this.lblNomePers.Text = "Digite o nome do personagem do";
            this.lblNomePers.Visible = false;
            // 
            // txtNomePers
            // 
            this.txtNomePers.Location = new System.Drawing.Point(281, 168);
            this.txtNomePers.Name = "txtNomePers";
            this.txtNomePers.Size = new System.Drawing.Size(150, 20);
            this.txtNomePers.TabIndex = 8;
            this.txtNomePers.Visible = false;
            this.txtNomePers.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.txtNomePers_KeyPress);
            // 
            // gbPers
            // 
            this.gbPers.AutoSize = true;
            this.gbPers.BackColor = System.Drawing.Color.Transparent;
            this.gbPers.Controls.Add(this.lblListPers);
            this.gbPers.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.gbPers.Location = new System.Drawing.Point(625, 24);
            this.gbPers.Name = "gbPers";
            this.gbPers.Size = new System.Drawing.Size(150, 379);
            this.gbPers.TabIndex = 9;
            this.gbPers.TabStop = false;
            this.gbPers.Text = "Personagens";
            // 
            // lblListPers
            // 
            this.lblListPers.Location = new System.Drawing.Point(18, 16);
            this.lblListPers.Name = "lblListPers";
            this.lblListPers.Size = new System.Drawing.Size(117, 346);
            this.lblListPers.TabIndex = 0;
            // 
            // lblVarJog
            // 
            this.lblVarJog.AutoSize = true;
            this.lblVarJog.Location = new System.Drawing.Point(191, 168);
            this.lblVarJog.Name = "lblVarJog";
            this.lblVarJog.Size = new System.Drawing.Size(45, 13);
            this.lblVarJog.TabIndex = 10;
            this.lblVarJog.Text = "jogador:";
            this.lblVarJog.Visible = false;
            // 
            // frmCriaTabela
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
            this.ClientSize = new System.Drawing.Size(798, 537);
            this.Controls.Add(this.lblVarJog);
            this.Controls.Add(this.gbPers);
            this.Controls.Add(this.txtNomePers);
            this.Controls.Add(this.lblNomePers);
            this.Controls.Add(this.txtNumPers);
            this.Controls.Add(this.lblNumPers);
            this.Controls.Add(this.gbJog);
            this.Controls.Add(this.txtNomeJog);
            this.Controls.Add(this.lblNomeJog);
            this.Controls.Add(this.txtNumJog);
            this.Controls.Add(this.lblNumJog);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "frmCriaTabela";
            this.Text = "Gerador de Tabelas";
            this.gbJog.ResumeLayout(false);
            this.gbPers.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblNumJog;
        private System.Windows.Forms.TextBox txtNumJog;
        private System.Windows.Forms.Label lblNomeJog;
        private System.Windows.Forms.TextBox txtNomeJog;
        private System.Windows.Forms.GroupBox gbJog;
        private System.Windows.Forms.Label lblListJog;
        private System.Windows.Forms.Label lblNumPers;
        private System.Windows.Forms.TextBox txtNumPers;
        private System.Windows.Forms.Label lblNomePers;
        private System.Windows.Forms.TextBox txtNomePers;
        private System.Windows.Forms.GroupBox gbPers;
        private System.Windows.Forms.Label lblListPers;
        private System.Windows.Forms.Label lblVarJog;
    }
}

