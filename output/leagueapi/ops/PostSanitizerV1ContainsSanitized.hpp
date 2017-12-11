#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/SanitizerContainsSanitizedResponse.hpp>
#include <leagueapi/definitions/SanitizerContainsSanitizedRequest.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<SanitizerContainsSanitizedResponse> PostSanitizerV1ContainsSanitized (const https::Info& _info_,
      const SanitizerContainsSanitizedRequest& request /**/ )
  { 
    return { https::Do(_info_, "post", "/sanitizer/v1/containsSanitized?", { 
    }, { 
    },request) };
  }
} 