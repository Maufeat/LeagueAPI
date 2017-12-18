#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPersonalizedOffersUIOffer.hpp"
#include "../def/LolPersonalizedOffersOfferIds.hpp"
namespace lol {
  inline Result<std::vector<LolPersonalizedOffersUIOffer>> PostLolPersonalizedOffersV1OffersReveal(LeagueClient& _client, const LolPersonalizedOffersOfferIds& offerIds)
  {
    try {
      return ToResult<std::vector<LolPersonalizedOffersUIOffer>>(_client.https.request("post", "/lol-personalized-offers/v1/offers/reveal?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(offerIds).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolPersonalizedOffersUIOffer>>(e.code());
    }
  }
  inline void PostLolPersonalizedOffersV1OffersReveal(LeagueClient& _client, const LolPersonalizedOffersOfferIds& offerIds, std::function<void(LeagueClient&, const Result<std::vector<LolPersonalizedOffersUIOffer>>&)> cb)
  {
    _client.httpsa.request("post", "/lol-personalized-offers/v1/offers/reveal?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(offerIds).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolPersonalizedOffersUIOffer>>(e));
            else
              cb(_client, ToResult<std::vector<LolPersonalizedOffersUIOffer>>(response));
        });
  }
}