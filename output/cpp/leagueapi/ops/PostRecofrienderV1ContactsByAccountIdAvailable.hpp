#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RecofrienderContactStateResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RecofrienderContactStateResource> PostRecofrienderV1ContactsByAccountIdAvailable (const https::Info& _info_,
      const uint64_t& accountId /**/ ,
      const std::optional<bool>& retainInCache = std::nullopt /**/)
  { 
    return { https::Do(_info_, "post", "/recofriender/v1/contacts/"+to_string(accountId)+"/available?", { 
      { "retainInCache", to_string(retainInCache) },
    }, { 
    }) };
  }
} 