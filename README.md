# MSMarksButtonList

![License MIT](https://img.shields.io/dub/l/vibe-d.svg)
![Pod version](http://img.shields.io/cocoapods/v/MSMarksButtonList.svg?style=flat)
![Platform info](http://img.shields.io/cocoapods/p/MSMarksButtonList.svg?style=flat)
[![Support](https://img.shields.io/badge/support-iOS7+-blue.svg?style=flat)](https://www.apple.com/nl/ios/)

A group of buttons ,can be used to do a multiple choice component

<div style="display:inline-block"><img src="https://github.com/LinkRober/MSMarksButtonList/blob/master/Example/ScreenShot/screenshot1.PNG" height="250px" /></div>

<div style="display:inline-block"><img src="https://github.com/LinkRober/MSMarksButtonList/blob/master/Example/ScreenShot/screenshot2.PNG" height="250px" /></div>




## Usage

Setting up padding:<br>

**MSButtonConfigurationModel**<br>

`@property (nonatomic, assign)  CGFloat edgeMargin`<br>
leading and trailing padding.<br>
最左边的button和最右边的button距离组件两侧边缘的距离

`@property (nonatomic, assign)  CGFloat horMargin`<br>
Horizontal padding between buttons.<br>
水平方向上button与button之间的距离

`@property (nonatomic, assign)  CGFloat verMargin`<br>
Vertical padding between buttons.<br>
垂直方向上button与button之间的距离

`@property (nonatomic, assign)  CGFloat buttonHeight`<br>
height of button.<br>
button的高度

`@property (nonatomic, assign) CGFloat fromTopMargin`<br>
padding form top.<br>
组件的top距离父view的top的距离.

`@property (nonatomic, assign) CGFloat componentWidth`<br>
width of component.<br>
组件的宽度

`@property (nonatomic, getter=isHide)  BOOL hide`<br>
hide when initial.<br>
初始化时是否隐藏.

`@property (nonatomic, assign)  NSInteger numberInaLine`</br>
number of buttons in very line.<br>
每一行button的数量

<br>


```
MSButtonConfigurationModel *configuration = [[MSButtonConfigurationModel alloc] initWithEdgeMargin:0.0f
                                                                                             horMargin:10.0f
                                                                                             verMargin:10.0f
                                                                                          buttonHeight:32.0f
                                                                                         fromTopMargin:160
                                                                                        componentWidth:[[UIScreen mainScreen] bounds].size.width
                                                                                         numberInALine:4];

```

Initialize buttonList:

```

MSMarksButtonList *buttonList = [[MSMarksButtonList alloc] initWithDataSource:[NSArray array]
                                                                       buttonType:MSButtonTypeOrderScore
                                                                    configuration:configuration];
                                                                    
```

>**Tips**</br>
I must convert your data model to button model(MSButtonModel),like example.

## Requirements
* ios 7+
* ARC

## Installation

MSMarksButtonList is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

`pod "MSMarksButtonList"`


## Author

[LinkRober](http://www.jianshu.com/users/84ae3fbd22e1/latest_articles)

## License

MSMarksButtonList is available under the MIT license. See the LICENSE file for more info.
