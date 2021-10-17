// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APaddle;
#ifdef PONG_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define PONG_Ball_generated_h

#define Pong_Source_Pong_Ball_h_14_RPC_WRAPPERS
#define Pong_Source_Pong_Ball_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Pong_Source_Pong_Ball_h_14_EVENT_PARMS \
	struct Ball_eventHitPaddle_Parms \
	{ \
		APaddle* Paddle; \
	};


extern PONG_API  FName PONG_HitBoundary;
extern PONG_API  FName PONG_HitPaddle;
#define Pong_Source_Pong_Ball_h_14_CALLBACK_WRAPPERS
#define Pong_Source_Pong_Ball_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesABall(); \
	friend PONG_API class UClass* Z_Construct_UClass_ABall(); \
	public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(ABall) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pong_Source_Pong_Ball_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesABall(); \
	friend PONG_API class UClass* Z_Construct_UClass_ABall(); \
	public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(ABall) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pong_Source_Pong_Ball_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define Pong_Source_Pong_Ball_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define Pong_Source_Pong_Ball_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sprite() { return STRUCT_OFFSET(ABall, Sprite); } \
	FORCEINLINE static uint32 __PPO__Sphere() { return STRUCT_OFFSET(ABall, Sphere); }


#define Pong_Source_Pong_Ball_h_11_PROLOG \
	Pong_Source_Pong_Ball_h_14_EVENT_PARMS


#define Pong_Source_Pong_Ball_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_Ball_h_14_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_Ball_h_14_RPC_WRAPPERS \
	Pong_Source_Pong_Ball_h_14_CALLBACK_WRAPPERS \
	Pong_Source_Pong_Ball_h_14_INCLASS \
	Pong_Source_Pong_Ball_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pong_Source_Pong_Ball_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_Ball_h_14_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_Ball_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Pong_Source_Pong_Ball_h_14_CALLBACK_WRAPPERS \
	Pong_Source_Pong_Ball_h_14_INCLASS_NO_PURE_DECLS \
	Pong_Source_Pong_Ball_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pong_Source_Pong_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS