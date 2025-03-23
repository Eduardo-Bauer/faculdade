package exercicio4;

public class Funcionario {
    private
        double salario;
        static double salarioMinimo;
        double qtdSalariosMinimos;

    public void setSalario(double salario) {
        this.salario = salario;
    }

    public void setSalarioMinimo(double salarioMinimo) {
        Funcionario.salarioMinimo = salarioMinimo;
    }

    public void setQtdSalariosMinimos(){
        this.qtdSalariosMinimos = this.salario / salarioMinimo;
    }

    public double getQtdSalariosMinimos(){
        return this.qtdSalariosMinimos;
    }
}
