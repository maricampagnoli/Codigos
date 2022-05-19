using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace Aula1.Models
{
    public class Contato
    {
        private int IdContato;
        private string Nome;
        private string Email;

        public int IdContato { get => IdContato; set => IdContato = value; }
        public string Nome { get => Nome; set => Nome = value; }
        public string Email { get => Email; set => Email = value; }
    }
}