package tr.havelsan.ueransim.ngap0.ies.octet_strings;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.pdu.*;
import tr.havelsan.ueransim.utils.bits.*;
import tr.havelsan.ueransim.utils.octets.*;
import tr.havelsan.ueransim.ngap0.ies.bit_strings.*;
import tr.havelsan.ueransim.ngap0.ies.octet_strings.*;
import tr.havelsan.ueransim.ngap0.ies.printable_strings.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;
import tr.havelsan.ueransim.ngap0.ies.choices.*;
import tr.havelsan.ueransim.ngap0.ies.integers.*;
import tr.havelsan.ueransim.ngap0.ies.enumerations.*;

import java.util.List;

public class NGAP_WarningMessageContents extends NGAP_OctetString {

    public NGAP_WarningMessageContents(OctetString value) {
        super(value);
    }

    public NGAP_WarningMessageContents(BitString value) {
        super(value);
    }

    public NGAP_WarningMessageContents(Octet[] octets) {
        super(octets);
    }

    public NGAP_WarningMessageContents(int[] octetInts) {
        super(octetInts);
    }

    public NGAP_WarningMessageContents(byte[] octetBytes) {
        super(octetBytes);
    }

    public NGAP_WarningMessageContents(String hex) {
        super(hex);
    }

    @Override
    public String getAsnName() {
        return "WarningMessageContents";
    }

    @Override
    public String getXmlTagName() {
        return "WarningMessageContents";
    }
}
