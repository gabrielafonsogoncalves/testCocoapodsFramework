//
//  ViewController.m
//  DigestingProject
//
//  Created by Michael Moscardini on 11/18/15.
//  Copyright © 2015 Michael Moscardini. All rights reserved.
//

#import "ViewController.h"
#import "WrapperProject.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    WrapperProject *wp = [[WrapperProject alloc] init];
    [wp testMethod];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
