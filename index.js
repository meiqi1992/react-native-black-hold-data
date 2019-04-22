

import { NativeModules } from 'react-native';

const { RNBlackHoldData } = NativeModules;

const BlackHoldData = {
    //初始化
    initWithAppKey:(appKey, channelId = '_default')=>{
        RNBlackHoldData.initWithAppKey(appKey, channelId)
    },
    //注册成功
    setRegisterWithAccountID:(account) =>{
        RNBlackHoldData.setRegisterWithAccountID(account)
    },
    //登录成功
    setLoginWithAccountID:(account) =>{
        RNBlackHoldData.setLoginWithAccountID(account)
    },
    //生成订单
    setDD:(ryTID,hbType,hbAmount) =>{
        RNBlackHoldData.setDD(ryTID,hbType,hbAmount)
    },
    //支付成功
    setRyzf:(ryTID,ryzfType,hbType,hbAmount) =>{
        RNBlackHoldData.setRyzf(ryTID,ryzfType,hbType,hbAmount)
    },
    //自定义事件
    setEvent:(event) =>{
        RNBlackHoldData.setEvent(event)
    },
}


export default BlackHoldData;
