#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPersonalizedOffersUIOffer.hpp"
namespace lol {
  inline Result<std::vector<LolPersonalizedOffersUIOffer>> GetLolPersonalizedOffersV1Offers(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolPersonalizedOffersUIOffer>> {
        _client.https.request("get", "/lol-personalized-offers/v1/offers?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolPersonalizedOffersUIOffer>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolPersonalizedOffersV1Offers(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolPersonalizedOffersUIOffer>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-personalized-offers/v1/offers?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolPersonalizedOffersUIOffer>> { response });
          else
            cb(_client,Result<std::vector<LolPersonalizedOffersUIOffer>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}