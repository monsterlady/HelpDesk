public class HelpDeskException extends Exception {
    private String message;

    public HelpDeskException(String message) {
        super(message);
    }
}
