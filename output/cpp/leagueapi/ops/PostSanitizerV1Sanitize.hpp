#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/SanitizerSanitizeResponse.hpp>
#include <leagueapi/definitions/SanitizerSanitizeRequest.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<SanitizerSanitizeResponse> PostSanitizerV1Sanitize (const https::Info& _info_,
      const SanitizerSanitizeRequest& request /**/ )
  { 
    return { https::Do(_info_, "post", "/sanitizer/v1/sanitize?", { 
    }, { 
    },request) };
  }
} 