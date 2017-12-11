#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RecofrienderLinkResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RecofrienderLinkResource> GetRecofrienderV1RegistrationsByNetwork (const https::Info& _info_,
      const std::string& network /**/ )
  { 
    return { https::Do(_info_, "get", "/recofriender/v1/registrations/"+to_string(network)+"?", { 
    }, { 
    }) };
  }
} 