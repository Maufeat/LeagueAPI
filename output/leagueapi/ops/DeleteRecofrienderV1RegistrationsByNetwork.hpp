#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteRecofrienderV1RegistrationsByNetwork (const https::Info& _info_,
      const std::string& network /**/ )
  { 
    return { https::Do(_info_, "delete", "/recofriender/v1/registrations/"+to_string(network)+"?", { 
    }, { 
    },"") };
  }
} 