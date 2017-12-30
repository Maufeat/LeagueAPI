#pragma once
#include "../base_def.hpp" 
#include "CollectionsLcdsMasteryBookDTO.hpp"
#include "CollectionsLcdsSpellBookDTO.hpp"
namespace lol {
  struct LolCollectionsSummonerData { 
    CollectionsLcdsMasteryBookDTO masteryBook;
    CollectionsLcdsSpellBookDTO spellBook; 
  };
  inline void to_json(json& j, const LolCollectionsSummonerData& v) {
    j["masteryBook"] = v.masteryBook; 
    j["spellBook"] = v.spellBook; 
  }
  inline void from_json(const json& j, LolCollectionsSummonerData& v) {
    v.masteryBook = j.at("masteryBook").get<CollectionsLcdsMasteryBookDTO>(); 
    v.spellBook = j.at("spellBook").get<CollectionsLcdsSpellBookDTO>(); 
  }
}