
# react-native-black-hold-data

## Getting started

`$ npm install react-native-black-hold-data --save`

### Mostly automatic installation

`$ react-native link react-native-black-hold-data`

### Manual installation


#### iOS

1. In XCode, in the project navigator, right click `Libraries` ➜ `Add Files to [your project's name]`
2. Go to `node_modules` ➜ `react-native-black-hold-data` and add `RNBlackHoldData.xcodeproj`
3. In XCode, in the project navigator, select your project. Add `libRNBlackHoldData.a` to your project's `Build Phases` ➜ `Link Binary With Libraries`
4. Run your project (`Cmd+R`)<


#### Android

1. Open up `android/app/src/main/java/[...]/MainActivity.java`
  - Add `import com.reactlibrary.RNBlackHoldDataPackage;` to the imports at the top of the file
  - Add `new RNBlackHoldDataPackage()` to the list returned by the `getPackages()` method
2. Append the following lines to `android/settings.gradle`:
  	```
  	include ':react-native-black-hold-data'
  	project(':react-native-black-hold-data').projectDir = new File(rootProject.projectDir, 	'../node_modules/react-native-black-hold-data/android')
  	```
3. Insert the following lines inside the dependencies block in `android/app/build.gradle`:
  	```
      compile project(':react-native-black-hold-data')
  	```

## ios 配置项
1. target->Build Settings ->Enable Bitcode 设置为NO
2. 将BlackHoldData.framework拖到项目中，选择target->Genral->Embedded Binaries 添加加号，添加项目中BlackHoldData.framework


## Usage
```javascript
import BlackHoldData from 'react-native-black-hold-data'


/* 初始化 每次应用打开的时候调用
* @param appKey 应用唯一标识
* @param channelId _dafault
*/

BlackHoldData.initWithAppKey('appKey','_dafault')
 
/* 注册成功
* @param account 账号唯一标识
*/
BlackHoldData.initWithAppKey(account)

/* 登录成功
* @param account 账号唯一标识
*/

BlackHoldData.setLoginWithAccountID(account)

/* 生成订单
* @param ryTID 交易流水号
* @param hbType 货币类型，例如CNY人民币、USD美金等
* @param hbAmount 支付金额
*/
BlackHoldData.setDD(ryTID,hbType,hbAmount)

/* 支付成功
* @param ryTID 交易流水号
* @param hbType 货币类型，例如CNY人民币、USD美金等
* @param ryzfType 支付类型,例如支付宝(alipay)，银联(unionpay)
* @param hbAmount 支付金额
*/
BlackHoldData.setDD(ryTID,ryzfType,hbType,hbAmount)


/* 自定义事件
* @param event 事件名
*/
BlackHoldData.setEvent(event)

  
