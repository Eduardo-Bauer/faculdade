import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class Consulta {
    private
        Date data;
        String obs;
        String tratamento;

    public
        SimpleDateFormat formato = new SimpleDateFormat("dd/mm/yyyy");

    public String getData(){
        return formato.format(this.data);
    }

    public String getObs(){
        return this.obs;
    }

    public String getTratamento(){
        return this.tratamento;
    }

    public void setData(String data) throws ParseException {
        this.data = formato.parse(data);
    }

    public void setObs(String obs){
        this.obs = obs;
    }

    public void setTratamento(String tratamento){
        this.tratamento = tratamento;
    }

    public String toString(){
        return "\n----Dados da Consulta----\n" +
                "Data: " + getData() + "\n" +
                "Obs: " + this.obs + "\n" +
                "Tratamento: " + this.tratamento + "\n";
    }
}
