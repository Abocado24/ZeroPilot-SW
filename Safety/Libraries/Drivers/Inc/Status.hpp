#pragma once

typedef enum StatusCode {
	STATUS_CODE_OK = 0,
	STATUS_CODE_UNKNOWN,
	STATUS_CODE_INVALID_ARGS,
	STATUS_CODE_RESOURCE_EXHAUSTED,
	STATUS_CODE_UNREACHABLE,
	STATUS_CODE_TIMEOUT,
	STATUS_CODE_EMPTY,
	STATUS_CODE_OUT_OF_RANGE,
	STATUS_CODE_UNIMPLEMENTED,
	STATUS_CODE_UNINITIALIZED,
	STATUS_CODE_INTERNAL_ERROR,
	NUM_STATUS_CODES,
} StatusCode;