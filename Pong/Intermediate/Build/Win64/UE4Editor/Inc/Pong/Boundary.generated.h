// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PONG_Boundary_generated_h
#error "Boundary.generated.h already included, missing '#pragma once' in Boundary.h"
#endif
#define PONG_Boundary_generated_h

#define Pong_Source_Pong_Boundary_h_13_RPC_WRAPPERS
#define Pong_Source_Pong_Boundary_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Pong_Source_Pong_Boundary_h_13_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesABoundary(); \
	friend PONG_API class UClass* Z_Construct_UClass_ABoundary(); \
	public: \
	DECLARE_CLASS(ABoundary, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(ABoundary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pong_Source_Pong_Boundary_h_13_INCLASS \
	private: \
	static void StaticRegisterNativesABoundary(); \
	friend PONG_API class UClass* Z_Construct_UClass_ABoundary(); \
	public: \
	DECLARE_CLASS(ABoundary, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(ABoundary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pong_Source_Pong_Boundary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoundary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoundary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoundary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoundary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoundary(ABoundary&&); \
	NO_API ABoundary(const ABoundary&); \
public:


#define Pong_Source_Pong_Boundary_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoundary(ABoundary&&); \
	NO_API ABoundary(const ABoundary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoundary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoundary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoundary)


#define Pong_Source_Pong_Boundary_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsGoal() { return STRUCT_OFFSET(ABoundary, IsGoal); } \
	FORCEINLINE static uint32 __PPO__IsLeftGoal() { return STRUCT_OFFSET(ABoundary, IsLeftGoal); } \
	FORCEINLINE static uint32 __PPO__GameModeRef() { return STRUCT_OFFSET(ABoundary, GameModeRef); } \
	FORCEINLINE static uint32 __PPO__Bounds() { return STRUCT_OFFSET(ABoundary, Bounds); }


#define Pong_Source_Pong_Boundary_h_10_PROLOG
#define Pong_Source_Pong_Boundary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_Boundary_h_13_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_Boundary_h_13_RPC_WRAPPERS \
	Pong_Source_Pong_Boundary_h_13_INCLASS \
	Pong_Source_Pong_Boundary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pong_Source_Pong_Boundary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pong_Source_Pong_Boundary_h_13_PRIVATE_PROPERTY_OFFSET \
	Pong_Source_Pong_Boundary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Pong_Source_Pong_Boundary_h_13_INCLASS_NO_PURE_DECLS \
	Pong_Source_Pong_Boundary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pong_Source_Pong_Boundary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
