#pragma once
#include "../base_op.hpp" 
#include "../def/RecofrienderLinkResource.hpp"
namespace lol {
  inline Result<RecofrienderLinkResource> GetRecofrienderV1RegistrationsByNetwork(const LeagueClient& _client, const std::string& network)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RecofrienderLinkResource> {
        _client_.request("get", "/recofriender/v1/registrations/"+to_string(network)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RecofrienderLinkResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}