public class Concatenation implements Sequence {

        private final Sequence seq1;
        private final Sequence seq2;

        @Override
        public String printedSeq() {
            return this.seq1.printedSeq() + this.seq2.printedSeq();
        }

        public Concatenation(Sequence firstSeq, Sequence secondSeq) {
            this.seq1= firstSeq;
            this.seq2 = secondSeq;
        }

    }
