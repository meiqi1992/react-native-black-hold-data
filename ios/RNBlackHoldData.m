
#import "RNBlackHoldData.h"
#import <BlackHoldData/BlackHoldData.h>


@implementation RNBlackHoldData

- (dispatch_queue_t)methodQueue
{
    return dispatch_get_main_queue();
}
RCT_EXPORT_MODULE()

RCT_EXPORT_METHOD(initWithAppKey:(NSString *)appKey withChannelId:(NSString *)channelId){
    
    [BlackHoldData initWithAppKey:appKey withChannelId:@"_default_"];
}

//注册成功后调用
RCT_EXPORT_METHOD(setRegisterWithAccountID:(NSString *)account){
    
    [BlackHoldData setRegisterWithAccountID:account];
}

//登陆成功后调用
RCT_EXPORT_METHOD(setLoginWithAccountID:(NSString *)account){
    
    [BlackHoldData setRegisterWithAccountID:account];
}

//生成订单
RCT_EXPORT_METHOD(setDD:(NSString *)ryTID hbType:(NSString*)hbType hbAmount:(float)hbAmount){
    
    [BlackHoldData setDD:ryTID hbType:hbType hbAmount:hbAmount];
}

// 支付完成，付费分析,记录玩家充值的金额（人民币单位是元）
RCT_EXPORT_METHOD(setRyzf:(NSString *)ryTID ryzfType:(NSString*)ryzfType hbType:(NSString*)hbType hbAmount:(float)hbAmount){
    
    [BlackHoldData setRyzf:ryTID ryzfType:ryzfType hbType:hbType hbAmount:hbAmount];
}

//自定义事件
RCT_EXPORT_METHOD(setEvent:(NSString *)eventName){
    
    [BlackHoldData setEvent:eventName];
}

@end
  
