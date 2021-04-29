
// https://www.codingninjas.com/codestudio/problems/ninja-and-the-storyteller_1264947

int countStories(int x, int y, int z)
{ 
    if (y > z){
        return 0;
    }

    int paid_stories = z / y;
	  int free_stories = 0;
    int story_count = paid_stories;
    
    while (story_count >= x)
    {
        int new_stories = story_count / x;

        int stories_left = story_count % x;
        
        free_stories += new_stories;
        
        story_count = new_stories + stories_left;
    }

    return paid_stories + free_stories;
}
 
