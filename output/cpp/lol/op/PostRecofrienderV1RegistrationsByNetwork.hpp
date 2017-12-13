#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderUrlResource.hpp>
namespace lol {
  Result<RecofrienderUrlResource> PostRecofrienderV1RegistrationsByNetwork(const LeagueClient& _client, const std::string& network)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/recofriender/v1/registrations/"+to_string(network)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}