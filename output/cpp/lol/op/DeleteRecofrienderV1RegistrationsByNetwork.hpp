#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteRecofrienderV1RegistrationsByNetwork(const LeagueClient& _client, const std::string& network)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/recofriender/v1/registrations/"+to_string(network)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}