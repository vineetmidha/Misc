
// https://www.codingninjas.com/codestudio/problems/program-to-check-the-validity-of-a-password_1263695

bool isValid(string str)
{
	if (str.length() < 8 || str.length() > 15)
        return false;
    
    bool digit = false, lower = false, upper = false, spl = false;
    
    for (auto c: str){
        if (isspace(c))
            return false;
        
        if (isdigit(c))
            digit = true;
        else if (islower(c))
            lower = true;
        else if (isupper(c))
            upper = true;
        else
            spl = true;
    }
    
    return (digit && lower && upper && spl);
}

