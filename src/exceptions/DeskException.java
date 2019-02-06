package exceptions;

public class DeskException extends Exception {
    public DeskException(String error){
        super("Error occurred!  " + error);
    }
}
