//
//  BlackHoldData.h
//  BlackHoldData
//
//  Created by MQ on 2019/4/15.
//  Copyright © 2019年 MQ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

typedef void (^completeBlock)(NSError *error,id result);

@interface BlackHoldData : NSObject

/*!
* @abstract 开启数据统计
*
* @param appKey 应用的appkey
* @param channelId 填写_default_
*
*/
+ (void)initWithAppKey:(NSString *)appKey withChannelId:(NSString *)channelId;


/*!
 * @abstract 注册成功后调用
 *
 * @param account 账号唯一标识，仅支持英文、数字、下划线
 *
 */
+ (void)setRegisterWithAccountID:(NSString *)account;


/*!
 * @abstract 登陆成功后调用
 *
 * @param account 账号唯一标识，仅支持英文、数字、下划线
 *
 */
+ (void)setLoginWithAccountID:(NSString *)account;


/*!
 * @abstract 生成订单
 *
 * @param ryTID 付费数据按此参数排重，交易流水号，请务必确保唯一
 * @param hbType 货币类型，按照国际标准组织ISO 4217中规范的3位字母，例如CNY人民币、USD美金等
 * @param hbAmount 支付的真实货币金额，人民币单位：元
 *
 */
+(void)setDD:(NSString *)ryTID hbType:(NSString*)hbType hbAmount:(float)hbAmount;


/*!
 * @abstract 支付完成，付费分析,记录玩家充值的金额（人民币单位是元）
 *
 * @param ryTID 付费数据按此参数排重，交易流水号，请务必确保唯一
 * @param ryzfType 支付类型,例如支付宝(alipay)，银联(unionpay)，微信支付（weixinpay）,易宝支付（yeepay）
 * @param hbType 货币类型，例如CNY人民币、USD美金等
 * @param hbAmount 支付的真实货币金额，人民币单位：元
 *
 */
+(void)setRyzf:(NSString *)ryTID ryzfType:(NSString*)ryzfType hbType:(NSString*)hbType hbAmount:(float)hbAmount;


/*!
 * @abstract 自定义事件
 *
 * @param eventName 自定义事件名称
 *
 */
+(void)setEvent:(NSString *)eventName;


/*!
 * @abstract 获取设备信息
 *
 */
+(NSString*)getDeviceId;


/*!
 * @abstract 获取appKey
 *
 */
+(NSString *)getAppKey;


/*!
 * @abstract 测试
 *
 */
+(void)mq_login:(NSString *)loginName password:(NSString *)password completeBlock:(completeBlock)completeBlock;


@end




