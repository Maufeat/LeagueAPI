#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPersonalizedOffersUIOffer.hpp>
#include <lol/def/LolPersonalizedOffersOfferIds.hpp>
namespace lol {
  inline Result<std::vector<LolPersonalizedOffersUIOffer>> PostLolPersonalizedOffersV1OffersReveal(const LeagueClient& _client, const LolPersonalizedOffersOfferIds& offerIds)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolPersonalizedOffersUIOffer>> {
        _client_.request("post", "/lol-personalized-offers/v1/offers/reveal?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(offerIds).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolPersonalizedOffersUIOffer>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}