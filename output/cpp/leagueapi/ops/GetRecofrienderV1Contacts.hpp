#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RecofrienderContactResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<RecofrienderContactResource>> GetRecofrienderV1Contacts (const https::Info& _info_ ,
      const std::optional<uint64_t>& accountId = std::nullopt /**/,
      const std::optional<std::string>& source = std::nullopt /**/,
      const std::optional<std::string>& friendState = std::nullopt /**/)
  { 
    return { https::Do(_info_, "get", "/recofriender/v1/contacts?", { 
      { "accountId", to_string(accountId) },
      { "source", to_string(source) },
      { "friendState", to_string(friendState) },
    }, { 
    }) };
  }
} 