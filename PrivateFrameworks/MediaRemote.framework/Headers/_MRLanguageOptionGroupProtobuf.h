//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, _MRLanguageOptionProtobuf;

@interface _MRLanguageOptionGroupProtobuf : PBCodable <NSCopying>
{
    _MRLanguageOptionProtobuf *_defaultLanguageOption;
    NSMutableArray *_languageOptions;
    BOOL _allowEmptySelection;
    struct {
        unsigned int allowEmptySelection:1;
    } _has;
}

+ (Class)languageOptionsType;
@property(retain, nonatomic) NSMutableArray *languageOptions; // @synthesize languageOptions=_languageOptions;
@property(retain, nonatomic) _MRLanguageOptionProtobuf *defaultLanguageOption; // @synthesize defaultLanguageOption=_defaultLanguageOption;
@property(nonatomic) BOOL allowEmptySelection; // @synthesize allowEmptySelection=_allowEmptySelection;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)languageOptionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)languageOptionsCount;
- (void)addLanguageOptions:(id)arg1;
- (void)clearLanguageOptions;
@property(readonly, nonatomic) BOOL hasDefaultLanguageOption;
@property(nonatomic) BOOL hasAllowEmptySelection;

@end

