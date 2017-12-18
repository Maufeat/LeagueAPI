#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPersonalizedOffersOfferId.hpp>
namespace lol {
  struct LolPersonalizedOffersOfferIds { 
    std::vector<LolPersonalizedOffersOfferId> offers; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersOfferIds& v) {
    j["offers"] = v.offers; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersOfferIds& v) {
    v.offers = j.at("offers").get<std::vector<LolPersonalizedOffersOfferId>>(); 
  }
}