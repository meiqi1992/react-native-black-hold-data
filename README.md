
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

#### Windows
[Read it! :D](https://github.com/ReactWindows/react-native)

1. In Visual Studio add the `RNBlackHoldData.sln` in `node_modules/react-native-black-hold-data/windows/RNBlackHoldData.sln` folder to their solution, reference from their app.
2. Open up your `MainPage.cs` app
  - Add `using Black.Hold.Data.RNBlackHoldData;` to the usings at the top of the file
  - Add `new RNBlackHoldDataPackage()` to the `List<IReactPackage>` returned by the `Packages` method


## Usage
```javascript
import RNBlackHoldData from 'react-native-black-hold-data';

// TODO: What to do with the module?
RNBlackHoldData;
```
  