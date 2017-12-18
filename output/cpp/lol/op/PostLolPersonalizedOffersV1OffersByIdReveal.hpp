#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPersonalizedOffersUIOffer.hpp"
namespace lol {
  inline Result<std::vector<LolPersonalizedOffersUIOffer>> PostLolPersonalizedOffersV1OffersByIdReveal(LeagueClient& _client, const std::string& id)
  {
    try {
      return Result<std::vector<LolPersonalizedOffersUIOffer>> {
        _client.https.request("post", "/lol-personalized-offers/v1/offers/"+to_string(id)+"/reveal?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolPersonalizedOffersUIOffer>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolPersonalizedOffersV1OffersByIdReveal(LeagueClient& _client, const std::string& id, std::function<void(LeagueClient&,const Result<std::vector<LolPersonalizedOffersUIOffer>>&)> cb)
  {
    _client.httpsa.request("post", "/lol-personalized-offers/v1/offers/"+to_string(id)+"/reveal?" +
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