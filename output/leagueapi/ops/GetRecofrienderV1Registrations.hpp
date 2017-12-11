#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RecofrienderLinkResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<RecofrienderLinkResource>> GetRecofrienderV1Registrations (const https::Info& _info_ ,
      const std::optional<std::string>& cb = std::nullopt /**/)
  { 
    return { https::Do(_info_, "get", "/recofriender/v1/registrations?", { 
      { "cb", https::to_string(cb) },
    }, { 
    },"") };
  }
} 