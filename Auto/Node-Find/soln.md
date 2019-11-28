# Node Find

Things which you need to solve this challenge:
  - Knowledge of CAN protocol {Basic Understanding}
  - Wireshark
  - Some Coffe with a flavour of surveillance {~~Just Kidding~~}

#### Let's Start

  - Get the PCAP file.
  - Fire up the Wireshark.

If we Scroll down across the pcap file we see a lot of data flowing from each node of Securehardware car. Now if we remember the basics of CAN protocol each node will be having a specific Arbitration ID, So we need to trace down the Node containing data related to a flag. The easiest way is to sort the ID in ascending/descending order and check the Hex data in flowing. 

- The ID which is transmitting the data is 0x0000078c
- Now sort out all the Hex data which is getting transmitted from 0x0000078c
- The final output will be w3lc0me_t0_InCTF_h4rdw4r3_qu4ls
- Submit it with the given flag format.

