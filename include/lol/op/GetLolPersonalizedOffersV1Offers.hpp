#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPersonalizedOffersUIOffer.hpp"
namespace lol {
  inline Result<std::vector<LolPersonalizedOffersUIOffer>> GetLolPersonalizedOffersV1Offers(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<LolPersonalizedOffersUIOffer>>(_client.https.request("get", "/lol-personalized-offers/v1/offers?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolPersonalizedOffersUIOffer>>(e.code());
    }
  }
  inline void GetLolPersonalizedOffersV1Offers(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<LolPersonalizedOffersUIOffer>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-personalized-offers/v1/offers?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolPersonalizedOffersUIOffer>>(e));
            else
              cb(_client, ToResult<std::vector<LolPersonalizedOffersUIOffer>>(response));
        });
  }
}