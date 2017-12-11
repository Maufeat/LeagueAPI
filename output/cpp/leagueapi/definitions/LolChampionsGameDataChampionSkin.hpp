#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolChampionsGameDataChampionChroma.hpp>
#include <leagueapi/definitions/LolChampionsCollectionsChampionSkinEmblem.hpp>

namespace leagueapi {
  struct LolChampionsGameDataChampionSkin { /**/ 
    int32_t id;/**/
    std::string name;/**/
    std::vector<LolChampionsCollectionsChampionSkinEmblem> emblems;/**/
    std::string uncenteredSplashPath;/**/
    std::optional<std::string> chromaPath;/**/
    std::optional<std::string> skinType;/**/
    std::optional<std::string> splashVideoPath;/**/
    std::string cardPath;/**/
    std::string splashPath;/**/
    std::string rarityGemPath;/**/
    std::optional<std::string> featuresText;/**/
    std::string tilePath;/**/
    std::vector<LolChampionsGameDataChampionChroma> chromas;/**/
  };
  static void to_json(json& j, const LolChampionsGameDataChampionSkin& v) { 
    j["id"] = v.id;
    j["name"] = v.name;
    j["emblems"] = v.emblems;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
    j["chromaPath"] = v.chromaPath;
    j["skinType"] = v.skinType;
    j["splashVideoPath"] = v.splashVideoPath;
    j["cardPath"] = v.cardPath;
    j["splashPath"] = v.splashPath;
    j["rarityGemPath"] = v.rarityGemPath;
    j["featuresText"] = v.featuresText;
    j["tilePath"] = v.tilePath;
    j["chromas"] = v.chromas;
  }
  static void from_json(const json& j, LolChampionsGameDataChampionSkin& v) { 
    v.id = j.at("id").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem>>(); 
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>(); 
    v.chromaPath = j.at("chromaPath").get<std::optional<std::string>>(); 
    v.skinType = j.at("skinType").get<std::optional<std::string>>(); 
    v.splashVideoPath = j.at("splashVideoPath").get<std::optional<std::string>>(); 
    v.cardPath = j.at("cardPath").get<std::string>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>(); 
    v.featuresText = j.at("featuresText").get<std::optional<std::string>>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    v.chromas = j.at("chromas").get<std::vector<LolChampionsGameDataChampionChroma>>(); 
  }
} 