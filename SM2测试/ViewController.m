//
//  ViewController.m
//  SM2测试
//
//  Created by 莫福见 on 16/7/25.
//  Copyright © 2016年 Manridy.Bobo.com. All rights reserved.
//

#import "ViewController.h"
#import "SM2.h"
#import "SM3.h"
#include "part4.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
//    //这是如何在ios工程调用上面两个方法
//    NSString *mingwen = @"testtesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttest";
//    char miwen[100];
//    sm2JiaMi(sm2_param_recommand, TYPE_GFp, 256, [mingwen UTF8String], miwen);
//    //密文前面多个04  在用其他工具对密文解密时需要去掉
//    NSData *miwendata =  [[NSData alloc]initWithBytes:miwen length: mingwen.length+32+64 +2];
//    NSLog(@"密文data=%@",  miwendata );
//    
//    //解密和加密类似将char数组转成nsdata再转成nsstring
//    char output[100];
//    sm2Jiemi(sm2_param_recommand, TYPE_GFp, 256, miwen);
//    NSString *mingwenout = [[NSString alloc]initWithCString:output encoding:NSUTF8StringEncoding];
//    NSLog(@"---解密后%@---",mingwenout);
    
    NSString *mingwen = @"123456";
    char miwen[100];
    sm2JiaMi(sm2_param_recommand, TYPE_GFp, 256, [mingwen UTF8String], miwen);
    //密文前面多个04  在用其他工具对密文解密时需要去掉
    NSData *miwendata =  [[NSData alloc]initWithBytes:miwen length: mingwen.length+32+64 +2];
    NSLog(@"密文data=%@",  miwendata );
    
    //解密和加密类似将char数组转成nsdata再转成nsstring
    char output[100];
    sm2Jiemi(sm2_param_recommand, TYPE_GFp, 256, miwen, output);
    NSString *mingwenout = [[NSString alloc]initWithCString:output encoding:NSUTF8StringEncoding];
    NSLog(@"---解密后%@---",mingwenout);
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
