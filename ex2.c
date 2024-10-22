using System;

public class ContadorDeA
{
    public static int ContarOcorrencias(string texto)
    {
        int contagem = 0;
        foreach (char caractere in texto)
        {
            if (char.ToLower(caractere) == 'a')
            {
                contagem++;
            }
        }
        return contagem;
    }

    public static void Main()
    {
        Console.Write("Digite uma string: ");
        string texto = Console.ReadLine();

        int ocorrencias = ContarOcorrencias(texto);
        Console.WriteLine($"A letra 'a' aparece {ocorrencias} vezes na string.");
    }
}