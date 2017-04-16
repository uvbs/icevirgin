package com.thanple.gs.common.nio;

import com.thanple.gs.common.provider.ProtocolLoader;
import lombok.Getter;

/**
 * Created by Thanple on 2017/1/22.
 */
public abstract class Protocol <T extends com.google.protobuf.MessageLite>{

    public abstract void process(io.netty.channel.ChannelHandlerContext ctx);

    @Getter
    protected T protocolBean;

    public Protocol(T msg){
        this.protocolBean = msg;
    }

    protected <V extends com.google.protobuf.MessageLite> void send(
            io.netty.channel.ChannelHandlerContext ctx,
            V serverMsg){

        //将普通服务器端的消息转换成GameServerSMsg万能消息发送
        /*_GameServerSMsg.GameServerSMsg.Builder builder = _GameServerSMsg.GameServerSMsg.newBuilder();
        builder.setId(ProtocolLoader.getInstance().getClassProtocolmap().get(serverMsg.getClass().getSimpleName()));
        builder.setMsg(serverMsg.toByteString());
*/
        //写入通道
//        ctx.writeAndFlush(builder.build());
    }


}
