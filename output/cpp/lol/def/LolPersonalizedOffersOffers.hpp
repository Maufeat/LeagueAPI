#pragma once
#include "../base_def.hpp" 
#include "LolPersonalizedOffersOffer.hpp"
namespace lol {
  struct LolPersonalizedOffersOffers { 
    std::vector<LolPersonalizedOffersOffer> offers; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersOffers& v) {
    j["offers"] = v.offers; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersOffers& v) {
    v.offers = j.at("offers").get<std::vector<LolPersonalizedOffersOffer>>(); 
  }
}