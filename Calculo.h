//chamada da funcao
double calcularIngresso(int,int);



//ação da funcao
double calcularIngresso(int quant, int idade)
{
    double preco_unitario, preco_total;

        // Verifica se a quantidade de bilhetes é inválida
        if (quant < 1 || quant > 5) 
        {
           return -100;
        } 
        else {

            if (idade < 0 || idade > 700)
            {
                return -100;
            }
            else
            {
                // Determina o preço com base na idade
                if (idade <= 12) {
                    preco_unitario = 10.0;
                } else if (idade >= 13 && idade <= 59) {
                    preco_unitario = 30.0;
                } else { // idade >= 60
                    preco_unitario = 15.0;
                }
                preco_total = preco_unitario * quant;
                return preco_total;

            }
        }   
}