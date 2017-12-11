#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RecofrienderContactResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RecofrienderContactResource> GetRecofrienderV2ContactsByAccountId (const https::Info& _info_,
      const uint64_t& accountId /**/ )
  { 
    return { https::Do(_info_, "get", "/recofriender/v2/contacts/"+to_string(accountId)+"?", { 
    }, { 
    },"") };
  }
} 