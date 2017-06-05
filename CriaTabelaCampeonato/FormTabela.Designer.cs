namespace CriaTabelaCampeonato
{
    partial class frmTabela
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmTabela));
            this.txtTeste = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // txtTeste
            // 
            this.txtTeste.Location = new System.Drawing.Point(89, 27);
            this.txtTeste.Name = "txtTeste";
            this.txtTeste.Size = new System.Drawing.Size(100, 20);
            this.txtTeste.TabIndex = 0;
            // 
            // frmTabela
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoScroll = true;
            this.ClientSize = new System.Drawing.Size(284, 262);
            this.Controls.Add(this.txtTeste);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "frmTabela";
            this.Text = "Tabela";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txtTeste;
    }
}