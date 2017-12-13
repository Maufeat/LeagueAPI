#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPersonalizedOffersUIOffer.hpp>
#include <lol/def/LolPersonalizedOffersOfferIds.hpp>
namespace lol {
  Result<std::vector<LolPersonalizedOffersUIOffer>> PostLolPersonalizedOffersV1OffersReveal(const LeagueClient& _client, const LolPersonalizedOffersOfferIds& offerIds)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-personalized-offers/v1/offers/reveal?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(offerIds).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}