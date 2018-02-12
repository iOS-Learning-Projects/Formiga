//
//  Formiga.h
//  Formiga
//
//  Created by Eduardo Vital Alencar Cunha on 14/03/17.
//  Copyright © 2017 Vital. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Formiga : NSObject {
    NSString * nome;
    NSString * funcao;
}

-(void) alterarDadosNome:(NSString *)nome funcao:(NSString *)funcao;

@end
