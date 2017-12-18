#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderUrlResource.hpp"
namespace lol {
  inline Result<RecofrienderUrlResource> PostRecofrienderV1RegistrationsByNetwork(LeagueClient& _client, const std::string& network)
  {
    try {
      return Result<RecofrienderUrlResource> {
        _client.https.request("post", "/recofriender/v1/registrations/"+to_string(network)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RecofrienderUrlResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostRecofrienderV1RegistrationsByNetwork(LeagueClient& _client, const std::string& network, std::function<void(LeagueClient&,const Result<RecofrienderUrlResource>&)> cb)
  {
    _client.httpsa.request("post", "/recofriender/v1/registrations/"+to_string(network)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<RecofrienderUrlResource> { response });
          else
            cb(_client,Result<RecofrienderUrlResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}