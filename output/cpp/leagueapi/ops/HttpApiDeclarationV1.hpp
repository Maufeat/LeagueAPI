#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Retrieves the API declaration for a supported API*/
  static https::Result<json> HttpApiDeclarationV1 (const https::Info& _info_,
      const std::string& api /*API to get a declaration for*/ )
  { 
    return { https::Do(_info_, "get", "/v1/api-docs/"+to_string(api)+"?", { 
    }, { 
    }) };
  }
} 