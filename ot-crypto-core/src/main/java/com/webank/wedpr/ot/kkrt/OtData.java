package com.webank.wedpr.ot.kkrt;

public class OtData {
    public long[] senderSeed;
    public byte[] senderSeedHash;
    public byte[] senderPackSeed;
    public long[][] enMessage;
    public byte[][] hash;
    public long[] senderMatrix;

    public long[] receiverSeed;
    public long[] receiverMatrix;
    public byte[] receiverPack;
}
