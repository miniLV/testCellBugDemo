//
//  LFbasicCellModel.h
//  HCCF
//
//  Created by Lyh on 2017/11/22.
//  Copyright © 2017年 xmhccf. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LFbasicCellModel : NSObject

///左侧label
@property (nonatomic, copy) NSString *titleLabel;

///右侧value - 右侧显示的值
@property (nonatomic, copy) NSString *rightValue;

///显示的imageStr
@property (nonatomic, copy) NSString *showImageStr;

///右侧数值列表 - 是一个下拉列表
@property (nonatomic, copy) NSArray *rightList;

/**
 省市区 - 单级联动 - tableView数据源
 1.只显示单层数据
 2.第一层是省，点击cell发送post请求，请求市数据，以此类推得到区
 3.这里的tableView的省份数据源，就应该是完整的数据源，才能显示‘省份名称’的同事，在点击的同时获取当前的省份的url，从而才能发送http请求，获取城市数据
 */
@property (nonatomic, copy) NSArray *provinceDatas;


///省市区 - 三级联动的数据！
@property (nonatomic, copy) NSArray *provincesList;

//选择的值
@property (nonatomic, copy) NSString *selectedValue;

//选择的值的 - code (选择的值，但是要传的是编码！)
@property (nonatomic, copy) NSString *selectedCode;

///跳转的值
@property (nonatomic, copy) NSString *nextUrl;

//占位文字
@property (nonatomic, copy) NSString *placeholder;

//textField的值
@property (nonatomic, copy) NSString *textFieldValue;

///中间label
@property (nonatomic, copy) NSString *contentLabel;



/**
 type:类型
    0.左右都是普通label
    1.左边是红色label，右边是灰色label - 价格 && 销量  
    2.左边是label，右边是btn - 点击展开下拉列表选取 ==> 年限选取等等
    3.左边是label，右边是btn - 点开展现产品详细说明 ==> 重大疾病保险金-detail
    4.左边是label, 右边是image - PDF展示
    5.只有一个label - 灰色内容详情 - 重大疾病保险金-detail
    6.左边label, 中间只有一个textField
    7.左边label，中间label，中间label显示灰色
    8.左边label, 中间label(灰色)，右边按钮 - 选择日期
    9.左边label, 中间label(灰色)，右边按钮 - 点击展开下拉列表选取 ==> 年限选取等等，与2的区别，中间有灰色label
    10.左边labl， 省市区三级联动
    11.只有一个textField - 详细地址
    12.左边label, 中间label(黑色)，右边按钮 - 点击展开下拉列表选取 ==> 年限选取等等，与9的区别，label黑色
    
    21.左边label，右边红色label - 金额
    31.左边label，中间身份证textField！ - 特殊键盘样式
    32.左边是label，中间是数字键盘 - 手机号之类的
    33.左边是label，中间是邮箱键盘
 
    40.最左侧是icon，中间黑色label，右侧箭头
    41.最左侧是icon，中间黑色label，右侧箭头 + 右侧黑色详情label
    42.最左侧是icon，中间黑色label，右侧箭头 + 右侧绿色详情label
 
    50.左侧label，右侧textField
    51.左侧label，右侧 > 箭头 - 列表选择
    52.左侧label，右侧image + “>”箭头
 
    61.证件照片-上方一个label，下方两张大照片
 
    99.我已认真阅读并同意<支付授权声明>
    100. 法定受益人 - 我已认真阅读<投保声明>...
 */
@property (nonatomic, assign) NSInteger type;



+ (void)fetchDatas;

@end
